HOW TO BUILD KERNEL 4.3 FOR SHV-E300L

1. How to Build
	- get Toolchain
			From Android Source Download site( http://source.android.com/source/downloading.html )
			Toolchain is included in Android source code.

	- edit Makefile
			edit "CROSS_COMPILE" to right toolchain path(You downloaded).
			Ex)  CROSS_COMPILE=/opt/toolchains/arm-eabi-4.6/bin/arm-eabi-                 // You have to check.

	- make
			$ cd kernel
			$ make ARCH=arm jaltelgt_00_defconfig
			$ make ARCH=arm
	
2. Output files
	- Kernel : Kernel/arch/arm/boot/zImage
	- module : Kernel/drivers/*/*.ko
	
3. How to make .tar binary for downloading into target.
	- change current directory to Kernel/arch/arm/boot
	- type following command
	$ tar cvf SHV-E300L_Kernel.tar zImage
