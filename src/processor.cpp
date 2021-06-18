#include "processor.h"
#include "linux_parser.h"
#include <vector>
#include <string>
using namespace LinuxParser;
using std::vector;
using std::string;
using std::stol;

// Return the aggregate CPU utilization
float Processor::Utilization() {
    float u = double(LinuxParser::ActiveJiffies()) / double(LinuxParser::Jiffies());
    return u;
}