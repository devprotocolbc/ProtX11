//
// Created by BasLocal on 08/06/2025.
//

#ifndef LOGGER_H
#define LOGGER_H
#include <string>


namespace ProtX11 {
    class Logger final {
    public:
        enum class LogLevel {
            Error = 0,
            Warning,
            Info,
        };

        explicit Logger(LogLevel logLevel = LogLevel::Error);

        void log(LogLevel level, const char *message) const;

    private:
        LogLevel m_logLevel = LogLevel::Error;
    };

#define ProtXLogInfo(message){\
    getLogger().log((Logger::LogLevel::Info), message);\
}
#define ProtXLogWarning(message){\
    getLogger().log((Logger::LogLevel::Warning), message);\
}
#define ProtXLogError(message){\
    getLogger().log((Logger::LogLevel::Error), message);\
}
#define ProtXLogErrorAndThrow(message){\
    ProtXLogError(message)\
    throw std::runtime_error(message);\
}
}


#endif //LOGGER_H
