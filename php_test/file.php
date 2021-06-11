<?php

    echo "<h3>Estimating your artwork...</h3>" . "<br>";
    $year = NULL;
    $name = NULL;
    $type = NULL;
    //if ((!empty($_POST['year'])) && (!empty($_POST['name'])) && (!empty($_POST['type']))) {
    $year = $_POST['year'];
    $name = $_POST['name'];
    $type = $_POST['type'];
    $price = $year * $type;
    //} else
    echo "your artwork's price is : " . $price . "€ <br>";
