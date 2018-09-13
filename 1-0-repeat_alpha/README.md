Assignment name  : repeat_alpha<br>
Expected files   : repeat_alpha.c<br>
Allowed functions: write<br>
--------------------------------------------------------------------------------<br>

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.<br>

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...<br>

Case remains unchanged.<br>

If the number of arguments is not 1, just display a newline.<br>

Examples:<br>

$>./repeat_alpha "abc"<br>
abbccc<br>
$>./repeat_alpha "Alex." | cat -e<br>
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$<br>
$>./repeat_alpha 'abacadaba 42!' | cat -e<br>
abbacccaddddabba 42!$<br>
$>./repeat_alpha | cat -e<br>
$<br>
$><br>
$>./repeat_alpha "" | cat -e<br>
$<br>
$><br>
