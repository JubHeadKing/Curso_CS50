-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 29-06-2022 a las 08:06:35
-- Versión del servidor: 10.4.24-MariaDB
-- Versión de PHP: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `mask_db`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `registro`
--

CREATE TABLE `registro` (
  `id` int(11) NOT NULL,
  `date` timestamp NOT NULL DEFAULT current_timestamp(),
  `sin_mask` int(11) NOT NULL,
  `con_mask` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `registro`
--

INSERT INTO `registro` (`id`, `date`, `sin_mask`, `con_mask`) VALUES
(1, '2022-06-29 05:45:01', 1, 0),
(2, '2022-06-29 05:45:02', 1, 0),
(3, '2022-06-29 06:03:59', 1, 0),
(4, '2022-06-29 06:04:01', 1, 0),
(5, '2022-06-29 06:04:06', 1, 0),
(6, '2022-06-29 06:04:10', 1, 0),
(7, '2022-06-29 06:05:22', 0, 1),
(8, '2022-06-29 06:05:23', 0, 1),
(9, '2022-06-29 06:05:24', 0, 1),
(10, '2022-06-29 06:05:25', 0, 1),
(11, '2022-06-29 06:05:26', 0, 1),
(12, '2022-06-29 06:05:26', 0, 1),
(13, '2022-06-29 06:05:28', 1, 0),
(14, '2022-06-29 06:05:30', 1, 0),
(15, '2022-06-29 06:05:40', 0, 1),
(16, '2022-06-29 06:05:41', 0, 1),
(17, '2022-06-29 06:05:43', 1, 0);

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `registro`
--
ALTER TABLE `registro`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `registro`
--
ALTER TABLE `registro`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=18;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
