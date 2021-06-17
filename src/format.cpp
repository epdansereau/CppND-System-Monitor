#include <string>

#include "format.h"

using std::string;
using std::to_string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function

string Format::ElapsedTime(long seconds) {
    long HH = seconds / 3600;
    seconds -= HH*3600;
    long MM = seconds / 60;
    seconds -= MM*60;
    long SS = seconds;
    string sHH = HH < 10 ? "0" + to_string(HH) : to_string(HH);
    string sMM = MM < 10 ? "0" + to_string(MM) : to_string(MM);
    string sSS = SS < 10 ? "0" + to_string(SS) : to_string(SS);
    return sHH + ":" + sMM + ":" + sSS;
}