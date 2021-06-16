#include "processor.h";
#include "linux_parser.h";
#include <vector>;
#include <string>;
using namespace LinuxParser;
using std::vector;
using std::string;
using std::stol;

// TODO: Return the aggregate CPU utilization

float Processor::Utilization() {
    float u = LinuxParser::ActiveJiffies() / LinuxParser::Jiffies();
    return u;
}