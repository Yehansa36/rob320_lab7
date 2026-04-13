#include "rix/util/log.hpp"
#include "rix/core/common.hpp"
#include "rix/core/node.hpp"
#include "rix/core/service.hpp"

#include "msg/GradientDescentRequest.hpp"
#include "msg/GradientDescentResponse.hpp"

#include <autodiff/forward/dual.hpp>

using namespace rix::core;
using namespace rix::util;

using namespace autodiff;

using GradientDescentRequest = rix::msg::lab8::GradientDescentRequest;
using GradientDescentResponse = rix::msg::lab8::GradientDescentResponse;

dual objective_function(const dual& x) {
    // TODO: Implement a simple quadratic function: x^2 - 6x + 3.
}

std::pair<double, bool> gradient_descent_on_objective_function(double initial_guess, double step_scale, 
                                                               double tolerance, int max_iterations) {
    // TODO: Implement a gradient descent algorithm which:
    //      1. Starts at the value initial_guess 
    //      2. Takes steps of gradient * step_scale
    //      3. Terminates if the step is less then tolerance
    //      4. Takes at most max_iterations steps
    //      5. Returns {value, true} if the algorithm converges and {value, false} 
    //         if the algorithm reaches its iteration limit.
}

void gradient_descent_callback(const GradientDescentRequest &request, GradientDescentResponse &response) {
    // TODO: Run gradient descent with the data in the request and store the result in response.
}

int main() {
    // TODO: Initialize the node with name "gradient_descent", IP address "127.0.0.1", and port RIX_HUB_PORT

    // TODO: Advertise the service "gradient_descent" with the service_callback function

    // TOOD: Check if the service was advertised successfully

    // TODO: Spin the node in the foreground
    
    return 0;
}