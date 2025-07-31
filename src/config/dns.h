#ifndef DNS_H_INCLUDED
#define DNS_H_INCLUDED

#include "def.h"

enum class DnsProxyType
{
    None,
    SingBox,
};

struct DnsProxyConfig
{
    DnsProxyType proxy_type = DnsProxyType::None;
    std::vector<std::string> dns_proxy;
};

using DnsProxyConfigs = std::vector<DnsProxyConfig>;

#endif // DNS_H_INCLUDED
