#ifndef CATA_TOOLS_CLANG_TIDY_USENAMESPOINTCONSTANTSCHECK_H
#define CATA_TOOLS_CLANG_TIDY_USENAMESPOINTCONSTANTSCHECK_H

#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <llvm/ADT/StringRef.h>

#include "ClangTidy.h"

namespace clang
{
class CompilerInstance;

namespace tidy
{
class ClangTidyContext;

namespace cata
{

class UseNamedPointConstantsCheck : public ClangTidyCheck
{
    public:
        UseNamedPointConstantsCheck( StringRef Name, ClangTidyContext *Context )
            : ClangTidyCheck( Name, Context ) {}
        void registerMatchers( ast_matchers::MatchFinder *Finder ) override;
        void check( const ast_matchers::MatchFinder::MatchResult &Result ) override;
        using ClangTidyCheck::getLangOpts;
};

} // namespace cata
} // namespace tidy
} // namespace clang

#endif // CATA_TOOLS_CLANG_TIDY_USENAMESPOINTCONSTANTSCHECK_H