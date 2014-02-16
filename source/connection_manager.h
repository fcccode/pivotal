#pragma once

#include <set>

#include "connection.h"

namespace pivotal {
namespace http {

class connection_manager
{
public:
    connection_manager();

    void start(connection_ptr c);

    void stop(connection_ptr c);

    void stop_all();

private:
    std::set<connection_ptr> connections_;
};

} // namespace http
} // namespace pivotal