<?php

function issorted($array) {
    
    $length = count($array);
    
    for($i = 1; $i < $length; $i++)
    {
        if($array[$i-1] > $array[$i])
        {
            return false;
        }
    }

    return true;
}


function bogo_sort($list)
{

    while(!issorted($list)) {
        shuffle($list);
    }
    return $list;

}
