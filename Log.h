#pragma once
#include <iostream>

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelFatalError = 1;
	const int LogLevelWarning = 2;
	const int LogLevelInfo = 3;
	const int LogLevelAll = 4;
private:
	int m_LogLevel = LogLevelInfo;
public:
	void SetLevel(int Level)
	{
		m_LogLevel = Level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel == LogLevelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
		else if (m_LogLevel == LogLevelAll) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}
	void FatalError(const char* message)
	{
		if (m_LogLevel == LogLevelFatalError) {
			std::cout << "[FATAL_ERROR]: " << message << std::endl;
			exit(1);
		}
		if (m_LogLevel == LogLevelAll) {
			std::cout << "[FATAL_ERROR]: " << message << std::endl;
			exit(1);
		}
	}
	void Warn(const char* message)
	{
		if (m_LogLevel == LogLevelWarning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
		else if (m_LogLevel == LogLevelAll) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}
	void Info(const char* message)
	{
		if (m_LogLevel == LogLevelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}
		else if (m_LogLevel == LogLevelAll) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}
};