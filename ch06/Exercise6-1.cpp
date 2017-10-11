/*Rewrite the following for statement as an equivalent while statement:
for (i=0; i<max_length; i++) if (input_line[i] == ´?´) quest_count++;
Rewrite it to use a pointer as the controlled variable, that is, so that the test is of the form
*p==´?´.
*/
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