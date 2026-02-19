// pch.h: 预编译标头文件，用于包含常用的标准库头文件
// 此文件中的内容仅在第一次编译时编译一次，以提高编译性能
// 请勿在此处包含项目特定的头文件
#pragma once

// 定义 BDLL_EXPORTS 宏
#define BDLL_EXPORTS

// 标准库头文件
#include <iostream>
#include <fstream>
#include <mutex>
#include <vector>
#include <string>
#include <thread>

// WindowsSock2 头文件
#include <winsock2.h>
#include <ws2tcpip.h>
#include <in6addr.h>

// 链接 WinSock2 库
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "ws2_32.lib")
