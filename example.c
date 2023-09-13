``` int whitespace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return 1;
    return 0;
}

int in_double_quotes(char c)
{
    if (c == '"')
        return 1;
    return 0;
}

int in_single_quotes(char c)
{
    if (c == '\'')
        return 1;
    return 0;
}

void print_token(char *str, int start, int end)
{
    int len = end - start + 1; // Adjust the length to include the end character
    while (len > 0)
    {
        write(1, &str[start], 1);
        len--;
        start++;
    }
    write(1, "\n", 1);
}

void tokenize(char *str)
{
    int i = 0;
    int start = 0;
    int end = 0;
    int state = 0; // 0: outside both, 1: inside single quotes, 2: inside double quotes

    while (str[i])
    {
        if (state == 0 && in_single_quotes(str[i]))
        {
            state = 1;
            start = i + 1;
        }
        else if (state == 0 && in_double_quotes(str[i]))
        {
            state = 2;
            start = i + 1;
        }
        else if (state == 1 && str[i] == '\'')
        {
            state = 0;
            end = i - 1;
            print_token(str, start, end);
        }
        else if (state == 2 && str[i] == '"')
        {
            state = 0;
            end = i - 1;
            print_token(str, start, end);
        }
        else if (state == 0 && !whitespace(str[i]))
        {
            state = 0;
            start = i;
            while (str[i] && !whitespace(str[i]) && !in_double_quotes(str[i]) && !in_single_quotes(str[i]))
            {
                i++;
            }
            end = i;
            print_token(str, start, end - 1);
        }
        i++;
    }
} ```