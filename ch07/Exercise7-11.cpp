/*
*写一个error函数， 它取一个printf风格的保函%s,%c,和%d指示符的字符串，以及任意多个其他参数。
请不要使用printf()。如果你不知道%s,%c和%d的意思，请参看21.8节。使用<cstdarg>
*/
void error(char const *fmt, ...)
{
    assert(fmt);
    va_list p;
    va_start(p, fmt);
    for (char const *s = fmt; *s; ++s)
    {
        if (*s != '%')
            cerr.put(*s);
        else
        {
            switch (*(++s))
            {
                case '%' : cerr.put('%'); break;
                case 's' : cerr << va_arg(p, char const *); break;
                case 'c' : cerr << va_arg(p, char const *); break;
                case 'd' : cerr << va_arg(p, char const *); break;
                default : throw std::domain_error(std::sting("panic"));
            }

        }
    }
    va_end(p);
}