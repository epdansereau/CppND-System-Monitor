#include "processor.h"

#include <string>
#include <vector>

#include "linux_parser.h"
using namespace LinuxParser;
using std::stol;
using std::string;
using std::vector;

// Return the aggregate CPU utilization
float Processor::Utilization() {
  float u =
      double(LinuxParser::ActiveJiffies()) / double(LinuxParser::Jiffies());
  return u;
}