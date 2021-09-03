# dependency
'''
sudo apt-get install lzop
'''

# kernel
'''
cd kernel/linux-3.14.38
make distclean
cp linux_imx6ul_config .config
make ARCH=arm CROSS_COMPILE=../../../tools/gcc-4.6.2-glibc-2.13-linaro-multilib/fsl-linaro-toolchain/bin/arm-fsl-linux-gnueabi- -j12
'''
