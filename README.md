2048-多人@Terminal
================

###简

经典的 2048 ,终端下支持多人联机(xterm-256color)

server和client采用socket建立连接

Original Project: https://github.com/mevdschee/2048.c


###编译

- 编译

`g++ -o 2048.bin 2048.cpp -std=c++11`

- 支持静态编译
 
`g++ -o 2048-static.bin 2048.cpp -std=c++11 -static`

###运行

单机模式

> $ ./2048.bin

多人模式

开启服务
> $ 2048.bin server

加入游戏,传入参数client
> $ 2048.bin client

会提示输入用户名`username`和 `server`

获取本机IP地址
> $ ifconfig

最后，好好玩..


