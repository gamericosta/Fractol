/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_msg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:22:48 by ricosta           #+#    #+#             */
/*   Updated: 2024/07/24 23:22:48 by ricosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	print_fractal_options(void)
{
	ft_putendl_fd("+===============  Fractais Disponíveis ==============+", 1);
	ft_putendl_fd("Which fractal would you like to view?", 1);
	ft_putendl_fd("\tM - Mandelbrot", 1);
	ft_putendl_fd("\tJ - Julia", 1);
	ft_putendl_fd("\tB - Burning Ship", 1);
	ft_putendl_fd("\tT - Tricorn", 1);
	ft_putendl_fd("\tX - Mandelbox", 1);
	ft_putendl_fd("\e[36mUsage example:\t./fractol <type>\n\t\t./fractol M\e[0m", 1);
	ft_putstr_fd("\nFor Julia, you may specify starting values for the\n", 1);
	ft_putstr_fd("initial fractal shape. Values must be between\n", 1);
	ft_putendl_fd("-2.0 and 2.0 and must contain a decimal point.", 1);
	ft_putendl_fd("\e[36mUsage example:\t", 1);
	ft_putendl_fd("./fractol J\n\t\t./fractol J 0.285 0.01\e[0m", 1);
}

void	print_color_options(void)
{
	ft_putendl_fd("\n+===============  Color Display  ====================+", 1);
	ft_putendl_fd("Pick a display color by providing a hexadecimal code.", 1);
	ft_putendl_fd("The hex color code must be formatted as RRGGBB:", 1);
	ft_putendl_fd("\tWhite:\tFFFFFF\t\tBlack:\t000000", 1);
	ft_putendl_fd("\tRed:\tFF0000\t\tGreen:\t00FF00", 1);
	ft_putendl_fd("\tBlue:\t0000FF\t\tYellow:\tFFFF00", 1);
	ft_putendl_fd("Other interesting colors:", 1);
	ft_putendl_fd("\tPurple:\t9933FF\t\tOrange:\tCC6600", 1);
	ft_putendl_fd("\tPink:\tFF3399\t\tTurquoise: 00FF80\t", 1);
	ft_putstr_fd("\e[36mUsage example:\t", 1);
	ft_putendl_fd("./fractol <type> <color>", 1);
	ft_putendl_fd("\t\t./fractol M 0066FF\e[0m", 1);
	ft_putendl_fd("\nFor Julia, you can only specify colors after", 1);
	ft_putendl_fd("the starting values.", 1);
	ft_putstr_fd("\e[36mUsage example:\t", 1);
	ft_putendl_fd("./fractol J 0.285 0.01 CC6600\e[0m", 1);
}

void	print_controls(void)
{
	ft_putendl_fd("\n+============= Controls-Ricosta ===================+", 1);
	ft_putendl_fd("WASD or arrow keys\tmove view.", 1);
	ft_putendl_fd("+/- or scroll wheel\tzoom in and out.", 1);
	ft_putendl_fd("Spacebar\t\tchange color schemes.", 1);
	ft_putendl_fd("Left click\t\tshift Julia set [Julia only].", 1);
	ft_putendl_fd("1, 2, 3, 4, 5\t\tswitch fractals.", 1);
	ft_putendl_fd("ESC or close window\tquit fract'ol.", 1);
	ft_putendl_fd("+====================================================+\n", 1);
}

void	help_msg(t_fractol *f)
{
	ft_putendl_fd("\n+====================================================+", 1);
	ft_putendl_fd("|               FRACT'OL Ricosta                      |", 1);
	ft_putendl_fd("+====================================================+\n", 1);
	print_fractal_options();
	print_color_options();
	clean_exit(EXIT_FAILURE, f);
}
