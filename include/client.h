#pragma once
#include <winsock2.h>
#include <string>
#include <vector>
#include "pchclient.h"

#ifdef BDLL_EXPORTS
#define BDLL_API extern "C" __declspec(dllexport)
#else
#define BDLL_API extern "C" __declspec(dllimport)
#endif

// 函数声明
BDLL_API void initializeWinsock();
BDLL_API void cleanupWinsock();
BDLL_API SOCKET connectToServer(const std::string& serverIP, int port);
BDLL_API void handleClientMessages(SOCKET clientSocket, std::vector<std::string>& messages);
BDLL_API bool sendFile(SOCKET clientSocket, const std::string& filePath);
BDLL_API bool receiveFile(SOCKET clientSocket, const std::string& fileName, size_t fileSize);
BDLL_API void sendMessage(SOCKET clientSocket, const std::string& message);
