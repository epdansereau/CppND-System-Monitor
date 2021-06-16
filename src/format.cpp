#include <string>

#include "format.h"

using std::string;

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
    string sHH = HH < 10 ? "0" + sHH : sHH;
    string sMM = MM < 10 ? "0" + sMM : sMM;
    string sSS = SS < 10 ? "0" + sSS : sSS;
    return sHH + ":" + sMM + ":" + sSS;
}