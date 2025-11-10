malloc (memory allocation) est une fonction utilisée pour allouer dynamiquement de la mémoire pendant l'exécution d'un programme. Elle prend en argument la taille en octets à allouer et retourne un pointeur vers le début de la zone de mémoire allouée. Si l'allocation échoue, elle retourne NULL.

free, quant à elle, est utilisée pour libérer la mémoire précédemment allouée par malloc, évitant ainsi les fuites de mémoire. Il est important de libérer toute mémoire allouée dynamiquement une fois que l'on n'en a plus besoin pour maintenir la bonne utilisation de la mémoire.

Ces deux fonctions sont essentielles pour la gestion dynamique de la mémoire en C. Pour plus de détails, tu peux consulter la documentation officielle sur malloc et free : man7.org (2021) pour comprendre les garanties et limitations.
