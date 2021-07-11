#ifndef LS_COPYABLE_H
#define LS_COPYABLE_H

#include "ls/Item.h"

namespace ls
{
    class CopyableItem : public Item
    {
        public:
            std::string toString() override;
            virtual int copyTo(char *text, int len) = 0;
            virtual int lengthOfString() = 0;
    };
}

#endif