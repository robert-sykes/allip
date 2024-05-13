#ifndef _ALLIP_HTML_LEXER_H_
#define _ALLIP_HTML_LEXER_H_

#include <string>
#include <vector>

namespace Allip {
	struct HTMLToken {
		std::string name;
		std::string value;
	};

	class HTMLLexer {
	private:
		std::vector<HTMLToken> tokens;
	public:
		HTMLLexer() = default;

		void tokenise(); 
	};
}

#endif