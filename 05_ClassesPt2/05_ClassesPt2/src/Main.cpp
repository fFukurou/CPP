#include <iostream>

class Log
{
public:
	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

	// CONSTRUCTORS
	Log()
	{
		std::cout << "----------- Log initialized ------------" << std::endl;
	}

	Log(Level level)
	{
		std::cout << "----------- Log initialized ------------" << std::endl;
		this->m_LogLevel = level;
	}

	// DESTRUCTORS
	~Log()
	{
		std::cout << "Destroyed Log Entity" << std::endl;
	}


private:
	Level m_LogLevel = LevelInfo;

public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;	
	}
};



int main()
{
	Log log(Log::LevelError);
	//log.SetLevel(Log::LevelError);

	log.Error("Hello");
	log.Warn("Hello");
	log.Info("Hello");
	//std::cin.get();

}