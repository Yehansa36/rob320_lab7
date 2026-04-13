#include "rix/util/log.hpp"
#include "rix/core/common.hpp"
#include "rix/core/node.hpp"
#include "rix/core/service_client.hpp"

#include "msg/GradientDescentRequest.hpp"
#include "msg/GradientDescentResponse.hpp"

using namespace rix::core;
using namespace rix::util;

using GradientDescentRequest = rix::msg::lab8::GradientDescentRequest;
using GradientDescentResponse = rix::msg::lab8::GradientDescentResponse;

int main() {
    // TODO: Initialize the node with name "srv_client", IP address "127.0.0.1", and port RIX_HUB_PORT

    // TODO: Create a service client for the service "gradient_descent"

    // TODO: Create a GradientDescentRequest message to request gradient descent to be performed. Try a request with:
    //      1. Initial guess 8.
    //      2. Step scale 1e-2.
    //      3. Tolerance 1e-6.
    //      4. Iteration limit 10000.

    // TODO: Create a GradientDescentResponse message to store the response

    // TODO: Call the service with the request and response messages

    // TODO: Output the value and convergence in the format "Value: {value}, Converged: {converged}"

    return 0;
}