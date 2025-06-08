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
}


#endif //LOGGER_H
