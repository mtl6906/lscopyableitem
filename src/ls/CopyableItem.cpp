#include "ls/CopyableItem.h"

using namespace std;

namespace ls
{
    std::string CopyableItem::toString()
    {
        string text(lengthOfString(), '\0');
        copyTo((char *)text.c_str(), text.size());
        return text;
    }
}