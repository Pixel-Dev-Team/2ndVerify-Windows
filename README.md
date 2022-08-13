# 2ndVerify-Windows

<!-- [繁體中文版本 (By Bing Microsoft Translator)](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README_T.md) -->

[English Docs (By DeepL Translator)](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README_EN.md)

欢迎广大贡献者为多语言文档提供人工翻译！

**下面所有的说明都是针对 2ndVerify Version win-1.0 ！！！请勿在其他 OS 或 2ndVerify 其他版本（有些操作可能兼容）上操作！！！**

**郑重声明：目前开发者并未开发 Linux、macOS 版本，除 Windows 版本外其他所有版本均非官方版本，请在使用前考虑后果！具体请参考*官版&移植版*。


## 2ndVerify 有什么用？它是怎样运作的？

- 2ndVerify 可以帮您 2 次锁定您的计算机（如果您开启了系统盘 BitLocker，那么是3次），保障您的数据安全
- 它通过执行各个系统内置的指令来管理您的计算机的开关机状态，几乎不需要任何外置库。

## 如何使用 2ndVerify ？

(1) 安装：以下两种方式二选一即可。

### 源码编译

<!-- 1. 更改 2ndVerify.generic.cpp 第3、4行 const 变量，释义见下。
2. 编译 2ndVerify.generic.cpp。
3. 将编译后的二进制文件加入开机启动项
4. Enjoy~
-->
1. 从 GitHub `clone` 本仓库。
2. 对于不同平台，使用以下命令：

Linux only

```bash
make install --prefix=/path/to/2ndVerify
# prefix 缺省值为 /usr/local/
```

Linux or macOS

```bash
sudo chmod +x ./unix.sh
./unix.sh
# 默认安装到 /usr/local/
# 如想更改安装位置 可以将第二行的 $prefix=/usr/local/ 改为 $prefix=/path/to/2ndVerify
```

Windows

```cmd
start win.cmd
rem 默认安装到 D:\Program Files\
rem 如想更改安装位置 自行更改脚本第 3~4 行
rem 注意！！！只有一个引号！！！
```


### 获取二进制包
详见 Releases.

(2) 配置：

For all Platform:

```sh
2vconf passwd YOUR_PASSWD
2vconf maxtry YOUR_SETTING_OF_MAX_TRYING_TIMES
2vconf timeout YOUR_SETTING_OF_TIMEOUT
```

** 不配置是不能正常使用的！！！会导致无法开机等严重错误！！！ **
## 备注：CONST变量含义

Line 3: 

```cpp
const int maxWrongTimes
```

默认值：3

含义：最多尝试次数

调用：在```checkWrongMax() ```函数中有调用

重要性：不建议增加，可以减少或不修改

Line 4: 

```cpp
const string secode
```

默认值：DEFAULT_CODE@

含义：密码

调用：在```isRightCode() ```函数中有调用

重要性：⭐推荐修改

## 忘记了 Code 怎么办？

- 通过 PE 或安全模式删除开机启动项
- 通过特殊手段将 Save2ndVerify.bat 传入电脑 开机**眼疾手快地**执行该文件 即可解除***当时***的 2ndVerify 限制
- and so on.


## 2ndVerify 有哪些已开发或待开发的功能 ？

- [x] <del>验证输入的 Code 和存储的 Code 是否一致</del>

- [x] <del>限制最大尝试次数</del>

- [x] <del>达到最大尝试次数后自动重新启动</del>

- [x] <del>可以防止被关闭后无法保护数据（预先执行延迟重新启动指令）</del>

- [x] <del>几乎脱离外置库（只使用C++内核与系统内置指令）</del>

- [ ] 将 Code 以加密方式存储到本地，然后通过读取这个 Code，进行 2ndVerify 的运作

- [ ] 实现 GUI

- [ ] 通过时间戳的变化来实时更新 Code

- [ ] 当您忘记您的 Code 时，可以通过回答预设问题来进行重置 Code

- [ ] 联网登录到 [PixELBlog](https://blog.pixelwine.top) 账号，远程管理您的计算机（们）

- [ ] 连接到第三方平台

- [ ] 通过第三方平台API，实现远程登录

- [ ] 支持生物识别（有可能开发特殊的硬件）

  (画饼ing...)

## 2ndVerify 的官方版本与移植版本

释义：

- 经验证的官方版本：指经过 PixelWine 三机(VirtualBox Windows XP & VirtualBox Windows 7 & Physical Windows 10)验证可行性，且由 PixelWine 开发的 2ndVerify 版本。目前尚没有。

- 官方版本：指由 PixelWine 开发的 2ndVerify 版本，目前只有 2ndVerify Version Windows-alpha 。
- 经官方验证的移植版本：指经过 PixelWine 三机(VirtualBox Windows XP & VirtualBox Windows 7 & Physical Windows 10)验证可行性的移植版本。目前尚没有。
- 移植版本：指经过 PixelWine 书面或 Email 许可，且非由 PixelWine 开发的 2ndVerify 版本。目前尚没有。
- 未经官方许可的移植版本（又称“小道版本”）：指未经过 PixelWine 书面或 Email 许可，且非由 PixelWine 开发的 2ndVerify 版本。此项不进行统计。
<<<<<<< HEAD
=======

# Update:
本软件已经交由 [PixelWine Team](https://github.com/PixelWineTeam) 开发，本人仍参与开发。

>>>>>>> aa12e534f2e358af758c404875c42e5897c7820f
