// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h> // 包含更多网络函数
#include <thread>
#include <vector>
#include <mutex>
#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
#include <new> // 包含 new 和 nothrow

#pragma comment(lib, "ws2_32.lib")

// 定义常量
#define BUFFER_SIZE 1024
#define FILE_CHUNK_SIZE 1024

// 全局变量声明
extern std::vector<SOCKET> client_sockets;       // 存储所有连接的客户端套接字
extern std::mutex clientsMutex;           // 保护 clients 的互斥锁

#endif //PCH_H
