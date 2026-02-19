#pragma once

#ifdef A_EXPORTS
#define A_API __declspec(dllexport)
#else
#define A_API __declspec(dllimport)
#endif
#include <vector>
#include <mutex>
#include "pchserver.h"

// 全局变量声明
extern std::vector<SOCKET> client_sockets;       // 存储所有连接的客户端套接字
extern std::mutex clientsMutex;           // 保护 clients 的互斥锁

// 定义导出的函数
extern "C" A_API void StartServer(int port);
extern "C" A_API void StopServer();
