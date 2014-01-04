#ifndef __tree_sitter__token__
#define __tree_sitter__token__

#include "symbol.h"

namespace tree_sitter  {
    namespace rules {
        class Token : public Symbol {
        public:
            Token(const std::string &name);
            
            bool operator==(const Rule& other) const;
            rule_ptr copy() const;
            std::string to_string() const;
            void accept(Visitor &visitor) const;
        };
    }
}

#endif
