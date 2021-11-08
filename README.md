# gs_usb-rRIO
Adding more CAN busses to the roboRIO with gs_usb devices (CANable/CANtact/CANwork/Etc).  This is based on work mostly done with our other roboRIO module project: https://github.com/FRC900/rtc-bq32k-rRIO

Sample Devices:
- https://canable.io
- https://wiki.linklayer.com/index.php/CANtact
- http://www.revrobotics.com/rev-11-2158/

Next, we pulled the kernel driver from the NI git repo here:  
https://raw.githubusercontent.com/ni/linux/nilrt/19.1/4.14/drivers/net/can/usb/gs_usb.c

This is a stock driver for the Linux mainline kernel from what we can tell. It has not been modified for this.

This is built on the RoboRIO using these directions from NI:  
https://forums.ni.com/t5/NI-Linux-Real-Time-Documents/Tutorial-Adding-Kernel-Modules-on-NI-Linux-Real-Time/ta-p/3527186

Summary of steps from the NI Document: 
- Pull down these files into a local directory.
- run ```source /usr/local/natinst/tools/versioning_utils.sh```
- run ```setup_versioning_env```
- run ```versioning_call make```
- run ```cp gs_usb.ko /lib/modules/`uname -r`/kernel```
- run ```depmod```

You can now run this to instantiate the device once you plug it in:  
```modprobe gs_usb```

Running ```dmesg``` will show something like this:  
```
[  869.720485] usbcore: registered new interface driver gs_usb
[ 3784.461444] usb 1-1.1: new full-speed USB device number 3 using ci_hdrc
[ 3784.615424] gs_usb 1-1.1:1.0: Configuring for 1 interfaces
[ 3784.910638] gs_usb 1-1.1:1.0 can0: bit-timing not yet defined
```

You can then proceed to setup the device and use it:
```
ip link set can0 type can bitrate 1000000
ip link set up can0
```

You may want to install can-utils using opkg:
- run ```opkg update```
- run ```opkg install can-utils```

Sometimes it is necessary to remap a particular USB device so that the kernel module can find and use it and, conveinently, UDEV has a method for doing that but please note that you are using this at your own risk:
```
ACTION=="add", ATTRS{idVendor}=="0483", ATTRS{idProduct}=="a30e", RUN+="/sbin/modprobe gs_usb" RUN+="/bin/sh -c 'echo 0483 a30e ff > /sys/bus/usb/drivers/gs_usb/new_id'"
```

Future work:
- ```ninetcfgutil``` is used for configuring network adapters on NI systems instead of putting stuff in ```/etc/network/``` - We have no clue how it works at the moment and NI doesn't have it very well documented from what we can find.  This should hopefully aid with setup.
- Update: ```ninetcfgutil``` seemed to be mostly useless for this: https://forums.ni.com/t5/NI-Linux-Real-Time-Discussions/ninetcfgutil-documentation/td-p/4035192?profile.language=en
