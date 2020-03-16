#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xddb7f2b7, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1825c709, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x73c20b4b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x928e38f3, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfaeb3882, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xb74796fd, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x67f7d2c5, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x90e62eb0, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x842f44c0, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x9a8a49ea, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x2446ff63, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xaa4778a2, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0xb5612c1, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x659e5ec6, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x782792f6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf8abd529, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x580134f1, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xbbcf23d9, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x75874757, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x7e941af3, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x94ccfaf4, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xe33b73f9, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x81886a8, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x470375ba, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0xb546fbfc, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x273454cc, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0xa8475c28, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd9df53b7, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xaf203987, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xc0627449, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe3946fb6, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x242dc2cd, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x13d7aac5, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xf597b779, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x90da2c17, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xafab50df, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x26cbc66b, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x5ab3ec7a, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc9e2392, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4f1032f6, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xd150a7cf, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1D50p606Fd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1209p2323d*dc*dsc*dp*ic*isc*ip*in00*");
