LDFLAGS = -static
CFLAGS = -Os -std=c++11 -s
2048_arm.bin: 2048.cpp
	gcc-arm-linux-gnueabihf-g++ 2048.cpp -o 2048.bin $(LDFLAGS) $(CFLAGS)

2048.bin: 2048.cpp
	g++ 2048.cpp -o 2048.bin $(LDFLAGS) $(CFLAGS)
