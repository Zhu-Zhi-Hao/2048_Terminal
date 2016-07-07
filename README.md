2048-多人@Terminal
================
> Thursday 07 July 2016
> Zhu-Zhi-Hao

###Screeshot
![Screenshots](https://github.com/Zhu-Zhi-Hao/2048_Terminal/blob/master/Screenshot.png)


### 预编译版本
- Prebuild for Android Static

`Prebuild/2048.bin`


###简

经典的 2048 ,终端下支持多人联机(xterm-256color)

server和client采用socket建立连接

Original Project: https://github.com/mevdschee/2048.c


###编译

- 编译

`make 2048.bin`
`make 2048_arm.bin`

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


