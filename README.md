## A Homebrew Kernel for GT-I9502

### Why making this kernel?

After recent update, Samsung blocked setuid feature in the kernel and thus renders the phone un-rootable. 
Since there are so many local(Chinese) apps which abuse permissions, rooting becomes a must.
GT-I9502 is only sold in China, and thus I got to do it all my own.

最近的三星更新使得内核阻止了 setuid 特性，以至于手机无法在官方内核下获得 root 权限。但是太多的中国的本土应用在滥用权限，因此 root 太重要了。9502只在大陆有售，没大神可指望，只好自己动手了。

### How to compile?

Modify CROSS_COMPILE environment variable in `my_setup.sh` to match toolchain path on your box.
Than run `build_kernel.sh`

### Is there a zip ready to flash?

Yes, but remember **this will void your warranty and I TAKE NO RESPONSIBILITY FOR YOUR DAMAGE CAUSED BY USING MY CODE OR FLASHING MY ZIP FILE!**

**刷内核会失去保修！本人不对因本代码或 zip 包造成的任何损失负责！**

[Download & Changelog | 下载和更新记录](https://github.com/cyaniris/sgs4duos_kernel/wiki/Changelog)


### Who is cyaniris?

I am cyaniris at xda-developers.com/gfan.com and NIGHTFIRE at newsmth.net ;) 

