#include <juce_core/juce_core.h>

int main() {

    std::cout <<
    juce::SystemStats::getJUCEVersion()
    << std::endl;

    return 0;
}
