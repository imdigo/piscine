# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolim <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/03 16:35:23 by dolim             #+#    #+#              #
#    Updated: 2018/08/03 16:35:24 by dolim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

stat --printf=%y inputfile | cut -d. -f1
