1.
i = 0;
while(i < max_length)
{
    if (input_line[i] == '?') quest_count++;
    i++;
}

2.

for(p = input_line; p != input_line + max_lenth; ++p)
{
    if(*p == '?') quest_count++;
}