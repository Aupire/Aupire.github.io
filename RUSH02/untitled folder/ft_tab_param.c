
int	**ft_tab_entree(char *tab_char_param)
{
	int i = 0; // incrémentation pour le tableau tab_int_param
	int j = 0; // incrémentation pour le tableau tab_int_param
	int k = 0; // incrémentation pour la chaine de caractères tab_char_param
	
	int tab_int_param[4][4];
	
	while (tab_char_param[k])
	{
		while (j < 4)
		{
			while (i < 4)
			{
				if (tab_char_param[k] == ' ') // Si il y a un espace, on passe au caractère suivant
				{
					k++;
				}
				else // Si il n'y a pas d'espace, on intègre le char en int dans le tableau de résultat tab_int_param et on passe au caractère suivant
				{
					tab_int_param[j][i] = tab_char_param[k] - '0';
					k++;
					i++;
				}
			}
		j++;
		i = 0;
	}
	
	return (tab_int_param);
}