/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-9.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woojilee <woojilee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:00:34 by woojilee          #+#    #+#             */
/*   Updated: 2023/02/18 20:00:36 by woojilee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    int age;
    double height;

    printf("write age and height");
    scanf("%d%lf", &age, &height);
    printf("age is %d, height is %.1lfcm\n", age, height);

    return 0;
}
