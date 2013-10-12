HOW TO BUILD KERNEL FOR SHV-E300

1. How to Build
	- get Toolchain
			From Android Source Download site( http://source.android.com/source/downloading.html )
			Toolchain in included in Android source code.

	- edit build_kernel.sh
			edit "CROSS_COMPILE" to right toolchain path(You downloaded).
			Ex)  CROSS_COMPILE=/opt/toolchains/arm-eabi-4.6/bin/arm-eabi-

	- make
			$ cd kernel
			$ ./build_kernel.sh

2. Output files
	- Kernel : Kernel/arch/arm/boot/zImage
	- module : Kernel/drivers/*/*.ko

3. How to make .tar binary for downloading into target.
	- change current directory to Kernel/arch/arm/boot
	- type following command
	$ tar cvf SHV-E300S_KOR_M_SK_Kernel.tar zImage