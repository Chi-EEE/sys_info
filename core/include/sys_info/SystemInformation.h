//
// Created by root on 03.07.2022.
//

#ifndef CPU_INFO_SYSTEMINFORMATION_H
#define CPU_INFO_SYSTEMINFORMATION_H
#include <cstdint>

namespace sys_info
{
    class SystemInformation
    {
    public:
        SystemInformation();
        virtual ~SystemInformation();

        /**
         * @brief Get Total Available Memory Bytes
         *
         * \return
         */
        int64_t GetTotalMemory();

        /**
         *
         * @brief Get Total Usage Memory Bytes at System
         *
         * \return
         */
        int64_t GetTotalUsageMemory();
        double GetCpuTotalUsage();

    private:
        struct PImpl;

        PImpl *m_impl;
    };
}

#endif // CPU_INFO_SYSTEMINFORMATION_H
