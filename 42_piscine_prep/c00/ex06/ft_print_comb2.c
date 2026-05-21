/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 19:10:16 by volkan            #+#    #+#             */
/*   Updated: 2026/05/19 20:59:18 by volkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void) {
  char a;
  char b;
  char c;
  char d;

  a = '9';
  b = '9';
  c = '9';
  while (a <= '9') {
    while (b <= '8') {
      c = b + 1;
      while (c <= '9') {
        c = b + 1;
        while (d = '9') {
          write(1, &a, 1);
          write(1, &b, 1);
          write(1, &c, 1);
          write(1, &d, 1);
        }
      }
    }
  }
}

int main(void) {
  ft_print_comb2();
  return (0);
}
