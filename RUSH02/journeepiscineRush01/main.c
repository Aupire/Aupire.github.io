void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_imp_tab(int **tab);
int		**ft_tab_param(char *tab);
int 	verif_generale_case(int **tab, int i, int j, int **tab_param);
int		**tab_init(int **tab_jeu, int **tab_param);


int main(int argc, int **argv)
{
	int **tab_param;
	int **tab_jeu; // tableau d'entiers de 4 x 4 alloué en mémoire dynamique par malloc
	
// Récupération des paramètres et transformation en un tableau de int à 2 entrées
	tab_param = ft_tab_param(*argv[1]);

// Initialisation du tableau
	tab_jeu = tab_init(tab_jeu, tab_param);

// Pour une case [j][i], vérification de la condition
	verif_generale_case(tab_jeu, i, j, tab_param);
	
	
// Impression du tableau de int après résolution du jeu
	ft_imp_tab(tab_jeu);
	
	return(0);
}