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
        // Get the singleton instance
        static ProcessInfo& GetInstance();

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

        // Delete copy constructor and assignment operator to prevent cloning
        ProcessInfo(const ProcessInfo&) = delete;
        ProcessInfo& operator=(const ProcessInfo&) = delete;

    private:
        // Private constructor to prevent external instantiation
        ProcessInfo();
        ~ProcessInfo();

        // Private implementation structure
        struct PImpl;

        PImpl *m_impl;
    };
}

#endif // CPU_INFO_PROCESSINFO_H
