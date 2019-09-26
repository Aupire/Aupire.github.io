int	ft_conditions1(int **tab_jeu, int i, int j);
int ft_conditions2(int **tab_jeu, int i, int j, int **tab_param);

int verif_generale_case(int **tab, int i, int j, int **tab_param)
{
	if	(ft_conditions1(tab_jeu, i, j) && ft_conditions1(tab_jeu, i, j, tab_param))
		{
			return (1);
		}
		else 
		{
			return (0);
		}
}