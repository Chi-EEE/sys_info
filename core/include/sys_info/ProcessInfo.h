//
// Created by root on 02.07.2022.
//
#pragma once
#ifndef CPU_INFO_PROCESSINFO_H
#define CPU_INFO_PROCESSINFO_H

#include <cstdint>

namespace sys_info
{
    class ProcessInfo
    {
    public:
        ProcessInfo();
        ~ProcessInfo();

        /*!
         * Get Current % Cpu Usage
         * @return percent
         */
        double GetCpuUsage();
        /*!
         * @brief Get Current Memory Usage
         * @return bytes
         */
        int64_t GetMemoryUsage();

    private:
        struct PImpl;

        PImpl *m_impl;
    };
}

#endif // CPU_INFO_PROCESSINFO_H
