<?php

    echo "<h3>Estimating your artwork...</h3>" . "<br>";

    $year = NULL;
    $name = NULL;
    $type = NULL;

    if ((!empty($_POST['year'])) && (!empty($_POST['name'])) && (!empty($_POST['type']))) {
        (int)$year = $_POST['year'];
        $name = $_POST['name'];
        (int)$type = $_POST['type'];
        $price = ($year * $type) / 100;
        echo "your artwork's price is : " . $price . "€ <br>";
    } else
        echo "you need to complete all the forms <br>";