#ifndef _EDITOR_HPP__
#define _EDITOR_HPP__

#include <string>

namespace editor
{

    int start_editing(const std::string &filename);

    void display(const std::string &text, int y=0, int x=0);

    class Editor
    {
    public:
        /* Copy Contructor */
        Editor(const Editor &) = delete;
        /* Move Contructor */
        Editor(Editor &&) = default;
        /* Copy Assignment Operator */
        Editor& operator=(const Editor &) = delete;
        /* Move Assignment Operator */
        Editor& operator=(Editor &&) = default;

        /* Constructor */
        Editor();
        /* Destructor */
        ~Editor();
    };

} // namespace editor

#endif /* _EDITOR_HPP__ */
